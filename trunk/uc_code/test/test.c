#ifdef TEST
#include "prog.h"
#include "test.h"
#include <string.h>

extern PICFAMILY picfamily;
extern PICTYPE pictype;

unsigned char set_pictype( PICTYPE pictype );
void test( PICTYPE pictype );
int main( int argc, char *argv[] )
{
	// very dumb interface if there are arguments then pure numbers are interpreted as pictype enums otherwise as a string pictype
	// no arguments do all pictypes

	if( argc <= 1 )
		for( pictype = 0; pictype < UPP_INVALID_PICTYPE; ++pictype )
			test( pictype );
	else
	{
		while( ++argv, --argc > 0 )
		{
			if( '0' <= argv[0][0] && argv[0][0] <= '9' )
				pictype = (PICTYPE) atoi( argv[0] );
			else
			{
				for( pictype = 0; pictype != UPP_INVALID_PICTYPE; ++pictype )
					if( strcasecmp( pictypeName[pictype], argv[0] ) == 0 )
						break;
				if( pictype == UPP_INVALID_PICTYPE ) {
					fprintf( stderr, "Unknown pictype %s\n", argv[0] );
					continue;
				}
			}
			test( pictype );
		}
	}
}
#define FIRST 1
#define LAST 2

void test( PICTYPE pt )
{
	unsigned char result;
	unsigned long address;
	unsigned char data[1024];
	char blocksize;

	pictype = pt;
	if( pictype >= UPP_INVALID_PICTYPE )
	{
		fprintf( stderr, "Unknown pictype %d\n", pictype );
		return;
	}
	currDevice = devices[pictype];
	picfamily = currDevice.flags.family;

	address = 0x40;
	blocksize = 1;

	memset( data, 0, sizeof( data ) );

	printf( " Type %s, Family %s\n", pictypeName[pictype], picfamilyName[picfamily] );
	printf( ">>>>>> set_vdd_vpp\n" );
	set_vdd_vpp( pictype, picfamily, 1 );

	printf( ">>>>>> bulk_erase( %s, %s, 0 )\n", picfamilyName[picfamily], pictypeName[pictype] );
	result = bulk_erase( picfamily, pictype, 0 );
	printf( " returns( %d )\n", result );

	printf( ">>>>>> write_code( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0L, 32, FIRST );
	result = write_code( picfamily, pictype, 0x00, data, 32, FIRST );
	printf( " returns( %d )\n", result );
	printf( ">>>>>> write_code( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0x20L, 32, 0 );
	result = write_code( picfamily, pictype, 0x20, data, 32, 0 );
	printf( " returns( %d )\n", result );


	printf( ">>>>>> write_data( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0L, 9, FIRST );
	result = write_data( picfamily, pictype, address, data, 9, FIRST );
	printf( " returns( %d )\n", result );

	printf( ">>>>>> write_config_bits( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0x2000L, 3, FIRST );
	result = write_config_bits( picfamily, pictype, 0x2000, data, 3, FIRST );
	printf( " returns( %d )\n", result );

	printf( ">>>>>> read_code( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0L, 3, FIRST );
	result = read_code( picfamily, pictype, 0, data, 3, FIRST );
	printf( " returns( %d )\n", result );
	printf( ">>>>>> read_code( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0xF80000L, 3, 0 );
	result = read_code( picfamily, pictype, 0xF80000, data, 3, 0 );
	printf( " returns( %d )\n", result );

	printf( ">>>>>>  read_data( %s, %s, %04lX, data, %02X, %X )\n", picfamilyName[picfamily], pictypeName[pictype], 0x02L, 9, FIRST );
	result = read_data( picfamily, pictype, 2, data, 9, FIRST );
	printf( " returns( %d )\n", result );

	printf("done\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
}
#else
// needs at least 1 line for MCC18
extern unsigned char timerRunning;
#endif

#ifndef __MD4_H__
#define __MD4_H__

#include <cstdint>

/*
===============================================================================

	Calculates a checksum for a block of data
	using the MD4 message-digest algorithm.

===============================================================================
*/

std::uint32_t MD4_BlockChecksum( const void *data, int length );

#endif /* !__MD4_H__ */

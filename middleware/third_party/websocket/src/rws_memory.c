/*
 *   Copyright (c) 2014 - 2016 Kulykov Oleh <info@resident.name>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy
 *   of this software and associated documentation files (the "Software"), to deal
 *   in the Software without restriction, including without limitation the rights
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *   copies of the Software, and to permit persons to whom the Software is
 *   furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *   THE SOFTWARE.
 */


#include "rws_memory.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#if defined(RWS_MTK)
#include "FreeRTOS.h"
#endif

void * rws_malloc(const size_t size)
{
	if (size > 0)
	{
#if defined(RWS_MTK)
		void * mem = pvPortMalloc(size);
#else
		void * mem = malloc(size);
		assert(mem);
#endif
		return mem;
	}
	return NULL;
}

void * rws_malloc_zero(const size_t size)
{
	void * mem = rws_malloc(size);
	if (mem)
	{
		memset(mem, 0, size);
	}
	return mem;
}

void rws_free(void * mem)
{
#if defined(RWS_MTK)
    if (mem) vPortFree(mem);
#else
    if (mem) free(mem);
#endif
}

void rws_free_clean(void ** mem)
{
	if (mem)
	{
		rws_free(*mem);
		*mem = NULL;
	}
}




/*
 *  Heap Handler
 *
 *  COPYRIGHT (c) 1989-2004.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */


#include <rtems/system.h>
#include <rtems/score/sysstate.h>
#include <rtems/score/heap.h>

/*PAGE
 *
 *  _Heap_Get_free_information
 *
 *  This heap routine returns information about the free blocks
 *  in the specified heap.
 *
 *  Input parameters:
 *    the_heap  - pointer to heap header.
 *    info      - pointer to the free block information.
 *
 *  Output parameters:
 *    returns - free block information filled in.
 */

void _Heap_Get_free_information(
  Heap_Control        *the_heap,
  Heap_Information    *info
)
{
  Heap_Block *the_block;
  Heap_Block *const tail = _Heap_Tail(the_heap);

  info->number = 0;
  info->largest = 0;
  info->total = 0;

  for(the_block = _Heap_First(the_heap);
      the_block != tail;
      the_block = the_block->next)
  {
    uint32_t const the_size = _Heap_Block_size(the_block);

    /* As we always coalesce free blocks, prev block must have been used. */
    _HAssert(_Heap_Is_prev_used(the_block));

    info->number++;
    info->total += the_size;
    if ( info->largest < the_size )
        info->largest = the_size;
  }
}

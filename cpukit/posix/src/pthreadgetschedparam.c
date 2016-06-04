/**
 * @file
 *
 * @brief Gets Scheduling Policy and Parameters of Individual Threads
 * @ingroup POSIXAPI
 */

/*
 *  13.5.2 Dynamic Thread Scheduling Parameters Access,
 *         P1003.1c/Draft 10, p. 124
 *
 *  COPYRIGHT (c) 1989-2014.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <pthread.h>
#include <errno.h>

#include <rtems/posix/pthreadimpl.h>
#include <rtems/posix/priorityimpl.h>
#include <rtems/score/threadimpl.h>

int pthread_getschedparam(
  pthread_t           thread,
  int                *policy,
  struct sched_param *param
)
{
  Thread_Control    *the_thread;
  ISR_lock_Context   lock_context;
  POSIX_API_Control *api;

  if ( policy == NULL || param == NULL ) {
    return EINVAL;
  }

  the_thread = _Thread_Get( thread, &lock_context );

  if ( the_thread == NULL ) {
    return ESRCH;
  }

  _Thread_State_acquire_critical( the_thread, &lock_context );

  api = the_thread->API_Extensions[ THREAD_API_POSIX ];
  *policy = api->schedpolicy;
  *param  = api->schedparam;
  param->sched_priority = _POSIX_Priority_From_core(
    the_thread->current_priority
  );

  _Thread_State_release( the_thread, &lock_context );
  return 0;
}

#include_next <linux/shmem_fs.h>

#ifndef __BACKPORT_LINUX_SHMEM_FS_H__
#define __BACKPORT_LINUX_SHMEM_FS_H__

#if LINUX_VERSION_CODE < KERNEL_VERSION(7, 3, 0)
static inline int shmem_write_folio(struct folio *folio)
{
	return shmem_writeout(folio, NULL, NULL);
}
#endif

#endif /* __BACKPORT_LINUX_SHMEM_FS_H__ */

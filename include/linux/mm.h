#include_next <linux/mm.h>

#ifndef __BACKPORT_LINUX_MM_H__
#define __BACKPORT_LINUX_MM_H__

#if LINUX_VERSION_CODE < KERNEL_VERSION(7, 3, 0)
static inline bool vma_is_cow_mapping(const struct vm_area_struct *vma)
{
	return is_cow_mapping(vma->vm_flags);
}
#endif

#endif /* __BACKPORT_LINUX_MM_H__ */

#include_next <drm/drm_drv.h>

#ifndef __BACKPORT_DRM_DRV_H__
#define __BACKPORT_DRM_DRV_H__

#if LINUX_VERSION_CODE >= KERNEL_VERSION(7, 3, 0)
#include <linux/cgroup_dmem.h>

/* GPU VA support no longer requires a driver feature flag. */
#define DRIVER_GEM_GPUVA 0

static inline struct dmem_cgroup_region *
__idb_shim_drmm_cgroup_register_region(struct drm_device *dev,
				      const char *region_name, u64 size)
{
	const struct dmem_cgroup_init init = {
		.size = size,
	};

	return drmm_cgroup_register_region(dev, region_name, &init);
}

#define drmm_cgroup_register_region __idb_shim_drmm_cgroup_register_region
#endif

#endif /* __BACKPORT_DRM_DRV_H__ */

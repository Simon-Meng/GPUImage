#import "GPUImageFilterGroup.h"

@class GPUImageSaturationFilter;
@class GPUImageGaussianBlurFilter;
@class GPUImageLuminanceRangeFilter;

@interface GPUImageiOSBlurFilter : GPUImageFilterGroup
{
    GPUImageSaturationFilter *saturationFilter;
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageLuminanceRangeFilter *luminanceRangeFilter;
}

/** A radius in pixels to use for the blur, with a default of 2.0. This adjusts the sigma variable in the Gaussian distribution function.
 */
@property (readwrite, nonatomic) CGFloat blurRadiusInPixels;

/** Saturation ranges from 0.0 (fully desaturated) to 2.0 (max saturation), with 1.0 as the normal level
 */
@property (readwrite, nonatomic) CGFloat saturation;

/** The degree to which to downsample, then upsample the incoming image to minimize computations within the Gaussian blur, default of 2.0
 */
@property (readwrite, nonatomic) CGFloat downsampling;

@end

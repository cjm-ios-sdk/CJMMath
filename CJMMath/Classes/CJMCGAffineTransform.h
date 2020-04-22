//
//  CJMCGAffineTransform.h
//  CJMMath
//
//  Created by chenjm on 2013/10/10.
//  Copyright (c) 2013 chenjm. All rights reserved.

#ifndef CJMCGAffineTransform_h
#define CJMCGAffineTransform_h

#import <CoreGraphics/CoreGraphics.h>
#include <stdio.h>

/**
 * @brief 获取弧度，范围 [0, 2pi]
 * @param t transform 仿射矩阵
 */
extern CGFloat CJMGetRadianFromTransform(CGAffineTransform t);

/**
 * @brief 获取x方向的缩放比例
 * @param t transform 仿射矩阵
 */
extern CGFloat CJMGetScaleXFromTransform(CGAffineTransform t);

/**
 * @brief 获取y方向的缩放比例
 * @param t transform 仿射矩阵
*/
extern CGFloat CJMGetScaleYFromTransform(CGAffineTransform t);

/**
 * @brief 获取x方向的偏移值
 * @param t transform 仿射矩阵
*/
extern CGFloat CJMGetTranslateXFromTransform(CGAffineTransform t);

/**
 * @brief 获取y方向的偏移值
 * @param t transform 仿射矩阵
 */
extern CGFloat CJMGetTranslateYFromTransform(CGAffineTransform t);

/**
 * @brief 获取以sourceRect为中心做transform变换后的rect
 * @param t transform 仿射矩阵
 * @param sourceRect 原始的Rect
 */
extern CGRect CJMGetRectByTransformAndRectCenter(CGAffineTransform t, CGRect sourceRect);


#endif /* CJMCGAffineTransform_h */

//
//  CJMGeometry.h
//  CJMMath
//
//  Created by jiemin on 2014/04/29.
//  Copyright (c) 2014 chenjm. All rights reserved.

#ifndef CJMGeometry_h
#define CJMGeometry_h

#include <stdio.h>
#import <CoreGraphics/CoreGraphics.h>

// 是否为CGPointZero
extern bool CJMIsPointZero(CGPoint p);

// 是否为CGSizeZero
extern bool CJMIsSizeZero(CGSize s);

// 是否为CGRectZero
extern bool CJMIsRectZero(CGRect r);

//角度转化弧度
extern CGFloat CJMGetRandian(CGFloat angle);

//弧度转化角度
extern CGFloat CJMGetAngle(CGFloat radian);

// 线段与rect的交点
extern CGPoint CJMGetIntersection(CGPoint point0, CGPoint point1, CGRect rect, bool *flag);

// 两个线段的交点
extern CGPoint CJMGetLineIntersection(CGPoint point1, CGPoint point2, CGPoint point3, CGPoint point4, bool *flag);

// 两个点的长度
extern CGFloat CJMGetLength(CGPoint point0, CGPoint point1);

// 弧度，0 ～ 2pi
extern CGFloat CJMGetRadian(CGPoint origin, CGPoint point0, CGPoint point1);

// 弧度，0 ~ 2pi
extern CGFloat CJMGetLineRadian(CGPoint point0, CGPoint point1);

// 沿着startPoint -> endPoint 方向上距离len的点
extern CGPoint CJMGetOutPoint(CGPoint startPoint, CGPoint endPoint, CGFloat len, bool *flag);

// 点point是否在rect上
extern bool CJMIsPointInRect(CGPoint point, CGRect rect);

//一个点在一条直线上的投影坐标
extern CGPoint CJMGetProjectionCoordinateInLine(CGPoint sourcePoint, CGPoint linePoint, CGFloat k);
extern CGPoint CJMGetProjectionCoordinateInLine2(CGPoint sourcePoint, CGPoint linePoint0, CGPoint linePoint1);

//获取直线上的某个点y坐标
extern CGFloat CJMGetPointXWithPointYAndLine(CGFloat pointY, CGPoint linePoint0, CGPoint linePoint1);

//获取直线上的某个点x坐标
extern CGFloat CJMGetPointYWithPointXAndLine(CGFloat pointX, CGPoint linePoint0, CGPoint linePoint1);



#endif /* CJMGeometry_h */

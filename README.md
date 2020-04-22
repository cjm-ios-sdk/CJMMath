# CJMMath

[![CI Status](https://img.shields.io/travis/chenjm/CJMMath.svg?style=flat)](https://travis-ci.org/chenjm/CJMMath)
[![Version](https://img.shields.io/cocoapods/v/CJMMath.svg?style=flat)](https://cocoapods.org/pods/CJMMath)
[![License](https://img.shields.io/cocoapods/l/CJMMath.svg?style=flat)](https://cocoapods.org/pods/CJMMath)
[![Platform](https://img.shields.io/cocoapods/p/CJMMath.svg?style=flat)](https://cocoapods.org/pods/CJMMath)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

- `CJMCGAffineTransform` 的相关接口。

```objc
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
```

- `CJMCGAffineTransform`的相关接口的演算逻辑说明

`CGAffineTransform` 包含了缩放，旋转，平移这三个矩阵的叠加，它的生成是通过这三个矩阵按固定顺序乘积即可以得到的。顺序是：1.缩放；2.旋转；3.平移。

`缩放`的矩阵表示：

```
     | sx 0  0|
t1 = | 0  sy 0|
     | 0  0  1|
```

`旋转`的矩阵表示：

```
     |  cos(angle)  sin(angle)  0 |
t2 = | -sin(angle)  cos(angle)  0 |
     |  0           0           1 |
```

`平移`的矩阵表示：

```
     | 1  0  0 |
t3 = | 0  1  0 |
     | dx dy 1 |
```

最终的矩阵表示：

```
t = t1 * t2 * t3

  |  sx * cos(angle)    sx * sin(angle)     0 |
= | -sy * sin(angle)    sy * cos(angle)     0 |
  |  dx                 dy                  1 |
```

CGAffineTransform 的矩阵表示为：

```
    | a  b  0 |
t = | c  d  0 |
    | tx ty 1 |
```

综上表述，可以得到以下公式，该接口的计算按照以下的公式进行推算。

```
a = sx * cos(angle)
b = sx * sin(angle)
c = -sy * sin(angle)
d = sy * cos(angle)
tx = dx
ty = dy
```

- `CJMGeometry` 的相关接口，主要是计算点，线，角度，交叉点等几何运算。

```objc
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

```


## Requirements

## Installation

CJMMath is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'CJMMath'
```

## Author

chenjm, cjiemin@163.com

## License

CJMMath is available under the MIT license. See the LICENSE file for more info.

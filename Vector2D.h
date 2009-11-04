//
//  Vector2D.h
//  Boids
//
//  Created by David Nolen on 11/3/09.
//  Copyright 2009 David Nolen. All rights reserved.
//

#define kEpsilon    1.0e-6f
#define kPI         3.1415926535897932384626433832795f
#define kHalfPI     1.5707963267948966192313216916398f
#define kTwoPI      2.0f*kPI

@interface Vector2D : NSObject <NSCopying>
{
@public
  float x;
  float y;
}

// Class Methods

+ (Vector2D*) withX:(float)x Y:(float)y;
+ (Vector2D*) newWithX:(float)x Y:(float)y;

+ (Vector2D*) add:(Vector2D*)v1 to:(Vector2D*)v2;
+ (Vector2D*) sub:(Vector2D*)v1 with:(Vector2D*)v2;
+ (Vector2D*) mult:(Vector2D*)v with:(float)scalar;
+ (Vector2D*) div:(Vector2D*)v with:(float)scalar;
+ (float) dot:(Vector2D*)v1 with:(Vector2D*)v2;

+ (Vector2D*) xAxis;
+ (Vector2D*) yAxis;
+ (Vector2D*) origin;
+ (Vector2D*) xy;
+ (Vector2D*) zero;
+ (Vector2D*) randomInside:(CGRect)rect;

// Instance Methods

- (Vector2D*) initWithX:(float)x Y:(float)y;
- (Vector2D*) copyWithZone:(NSZone *)zone;

- (NSString*) description;

- (float) length;
- (float) lengthSquared;

- (BOOL) isEqual:(Vector2D*)other;
- (BOOL) isZero;

- (Vector2D*) clean;
- (Vector2D*) zero;
- (Vector2D*) normalize;
- (Vector2D*) limit:(float)limit;

- (Vector2D*) add:(Vector2D*)other;
- (Vector2D*) sub:(Vector2D*)other;
- (Vector2D*) mult:(float)scalar;
- (Vector2D*) div:(float)scalar;

- (float) dot:(Vector2D*)other;
- (Vector2D*) perp;
- (float) perpDot:(Vector2D*)other;

@end
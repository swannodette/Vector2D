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

@interface Vector2D : NSObject 
{
@public
  float x;
  float y;
}

// Class Methods

+ (Vector2D*) newX:(float)x Y:(float)y;

+ (Vector2D*) add:(Vector2D*)v1 To:(Vector2D*)v2;
+ (Vector2D*) sub:(Vector2D*)v1 To:(Vector2D*)v2;
+ (Vector2D*) mult:(Vector2D*)v With:(float)scalar;
+ (Vector2D*) div:(Vector2D*)v With:(float)scalar;
+ (float) dot:(Vector2D*)v1 With:(Vector2D*)v2;

+ (Vector2D*) xAxis;
+ (Vector2D*) yAxis;
+ (Vector2D*) origin;
+ (Vector2D*) xy;

// Instance Methods

- (Vector2D*) initWithX:(float)x Y:(float)y;
- (NSString*) description;

- (float) length;
- (float) lengthSquared;

- (BOOL) isEqual:(Vector2D*)other;
- (BOOL) isZero;

- (void) clean;
- (void) zero;
- (void) normalize;

- (Vector2D*) add:(Vector2D*)other;
- (Vector2D*) sub:(Vector2D*)other;
- (Vector2D*) mult:(float)scalar;
- (Vector2D*) div:(float)scalar;

- (float) dot:(Vector2D*)other;
- (Vector2D*) perp;
- (float) perpDot:(Vector2D*)other;

@end

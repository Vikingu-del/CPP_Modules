# Fixed-Point Numbers

Fixed-point numbers are a method of representing real numbers in computer systems, which are typically better at handling integers. They offer a compromise between precision and range that can be more efficient than floating-point numbers in certain situations.

## What are Fixed-Point Numbers?

A fixed-point number is essentially an integer that is scaled by a specific factor. The position of the "decimal point" is fixed and is the same for all numbers of that type, hence the name "fixed-point".

A fixed-point number is divided into two parts: the integer part and the fractional part. The number of bits allocated to each part is fixed and does not change.

## How do Fixed-Point Numbers Work?

The value of a fixed-point number is calculated as `integer part + fractional part / 2^dp`, where `dp` is the number of bits in the fractional part.

For example, if a fixed-point number has 8 bits in the integer part and 8 bits in the fractional part, and the binary representation of the number is `11010101.10101100`, the value of the number is `11010101 + 10101100 / 2^8 = 213 + 172 / 256 = 213.671875`.

## Advantages of Fixed-Point Numbers

Fixed-point numbers have several advantages over floating-point numbers:

1. **Efficiency**: Fixed-point arithmetic can be more efficient than floating-point arithmetic in terms of speed and memory usage, especially on systems that do not have hardware support for floating-point operations.

2. **Precision**: Fixed-point numbers have a fixed precision that does not change depending on the magnitude of the number. This can make them more suitable than floating-point numbers for applications that require a consistent level of precision.

3. **Determinism**: Fixed-point arithmetic is deterministic, meaning that the result of a calculation is always the same given the same inputs. This is not always the case with floating-point arithmetic due to rounding errors.

## Disadvantages of Fixed-Point Numbers

The main disadvantage of fixed-point numbers is their limited range compared to floating-point numbers. Because the number of bits allocated to the integer part is fixed, fixed-point numbers can only represent a limited range of values. If a calculation results in a value that is outside this range, an overflow or underflow occurs, which can lead to incorrect results.

# Binary Space Partitioning (BSP)

Binary Space Partitioning (BSP) is a method for recursively subdividing a space into convex sets by hyperplanes. This subdivision gives rise to a representation of objects within the space by means of a tree data structure known as a BSP tree.

## What is Binary Space Partitioning?

Binary Space Partitioning is a generic process of recursively dividing a scene into two until the partitioning satisfies one or more requirements. It is commonly used in computer graphics and computational geometry.

## How does Binary Space Partitioning Work?

The process starts with a space and a set of objects within that space. A plane is chosen, and it splits the space into two halves. The objects within the space are also split by this plane, but an object that lies on the plane can be put in either half.

This process is repeated for each half-space, using a new plane each time. The result is a binary tree of spaces, known as a BSP tree, where each node corresponds to a space and contains a list of the objects in that space.

## Advantages of Binary Space Partitioning

1. **Efficient Queries**: Once the BSP tree is built, it can be used to efficiently answer geometric queries, such as finding all objects that intersect a given ray or finding the object that is closest to a given point.

2. **Visibility Determination**: BSP trees can be used to quickly determine which parts of a scene are visible from a given viewpoint. This is particularly useful in 3D computer graphics for tasks such as hidden surface removal.

3. **Solid Modeling**: BSP trees can represent not just the surface of a 3D object, but also its interior and exterior. This makes them suitable for solid modeling, where the goal is to represent and manipulate 3D objects as solid bodies.

## Disadvantages of Binary Space Partitioning

1. **Costly to Build and Update**: Building a BSP tree can be computationally expensive, especially for complex scenes. Moreover, if the scene changes, the BSP tree may need to be updated or even completely rebuilt, which can be costly.

2. **Arbitrary Splits**: The process of splitting objects along arbitrary planes can produce many small pieces, which can increase the complexity of the BSP tree and the time required to traverse it.

## For the last Exercise

We have just to split the triangle into 3 parts and check if the area of each triangle by summing with each other will be equal with the area of the main triangle.
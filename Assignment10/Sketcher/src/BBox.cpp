#include<iostream>
#include<limits>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"

BBox::BBox(std::deque<Triangle> triangles)
:mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBox(triangles);
}

BBox::~BBox()
{
}

void BBox::calculateBBox(std::deque<Triangle> triangles)
{

   mMax = Point3D(INT_MIN,INT16_MIN,INT16_MIN);
   mMin = Point3D(INT_MAX,INT_MAX,INT_MAX);

   for(Triangle triangle:triangles)
   {
      Point3D p1=triangle.p1();
      Point3D p2=triangle.p2();
      Point3D p3=triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);
   }

   mCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}

void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
      if(pointToCompare.x()>max.x())
          max.setX(pointToCompare.x());

      if(pointToCompare.y()>max.y())
          max.setY(pointToCompare.y());

      if(pointToCompare.z()>max.z())
          max.setZ(pointToCompare.z());

      if(pointToCompare.x()<min.x())
          min.setX(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.setY(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.setZ(pointToCompare.z());
}

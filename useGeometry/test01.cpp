#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>
using namespace std;
using namespace Eigen;

void test01()
{
    Quaterniond q1(0.35,0.2,0.3,0.1);
    q1.normalize();
    // Matrix3d R1=q1.toRotationMatrix();
    Vector3d t1(0.3,0.1,0.1);
    Isometry3d T1(q1);
    T1.pretranslate(t1);

    Quaterniond q2(-0.5,0.4,-0.1,0.2);
    q2.normalize();
    // Matrix3d R2=q2.toRotationMatrix();
    Vector3d t2(-0.1,0.5,0.3);
    Isometry3d T2(q2);
    T2.pretranslate(t2);

    Vector3d p1(0.5,0,0.2);
    Vector3d p2;
    p2=T2*T1.inverse()*p1;
    cout<<"在２号坐标系下的坐标：\n"<<p2.transpose()<<endl;
}

int main()
{
    test01();

    return 0;
}
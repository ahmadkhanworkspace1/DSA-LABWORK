//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Shape
//{
//public:
//    virtual T area() = 0;
//};
//
//template <typename T>
//class Circle : public Shape<T>
//{
//private:
//    T radius;
//
//public:
//    Circle(T r)
//    {
//        radius = r;
//    }
//
//    T area()
//    {
//        return 3.14 * radius * radius;
//    }
//};
//
//template <typename T>
//class Rectangle : public Shape<T>
//{
//private:
//    T length;
//    T width;
//
//public:
//    Rectangle(T l, T w)
//    {
//        length = l;
//        width = w;
//    }
//
//    T area()
//    {
//        return length * width;
//    }
//};
//
//int main()
//{
//    Circle<float> c(5);
//    Rectangle<float> r(10, 4);
//
//    cout << "Area of Circle: " << c.area() << endl;
//    cout << "Area of Rectangle: " << r.area() << endl;
//
//    return 0;
//}

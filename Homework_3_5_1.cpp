#include <iostream>

class Figure{
public:
    Figure() : Figure(0, "Фигура") { };
    int getCount() {
        return m_sidesCnt;
    };
    std::string getName() {
        return m_name;
    };

protected:
    int m_sidesCnt;
    std::string m_name;  

    Figure( int sidesCnt, std::string name ) {
        m_sidesCnt = sidesCnt;
        m_name = name;
    };

};

class Triangle: public Figure {
public:
    Triangle():  Figure(3, "Треугольник") { };
};

class Square : public Figure {
public:
    Square(): Figure(4, "Квадрат") { };
};

void printFigureInfo(Figure* fig){
    std::cout << fig->getName() << ": " << fig->getCount() << std::endl;
};

int main()
{

    setlocale(LC_ALL, "Russian");

    std::cout << "Количество сторон:" << std::endl;

    Figure fig;
    printFigureInfo(&fig);

    Triangle tri;
    printFigureInfo(&tri);

    Square sqr;
    printFigureInfo(&sqr);
}

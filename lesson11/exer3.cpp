//Баги: 
//  №1: конструктори не можуть бути virtual, тому 
//      <virtual Shape(const Shape&);> синтаксично не вірне
//  №2: У даному шматку коду жодний клас не наслідує Shape
//      тому від віриутально деструктора немає сенсу

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual Shape(const Shape&);
};

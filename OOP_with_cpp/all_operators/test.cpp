#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string *arr_string;
    int *arr_age;
    Person *p_arry;

public:
    static int count_of_copy_constructors;
    // default constructor
    Person() : name(""), age(0), p_arry(nullptr) {}
    int size;
    void arr_of_person()
    {
        cout << "Enter size of person's array: ";
        cin >> size;
        arr_string = new string[size];
        arr_age = new int[size];
        p_arry = new Person[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter name and age for person " << i + 1 << ": ";
            cin >> arr_string[i] >> arr_age[i];
            p_arry[i] = Person(arr_string[i], arr_age[i]);
        }
    }
    // [] operator
    Person operator[](int index) const
    {
        if (index >= 0 && index < size)
        {
            return Person(arr_string[index], arr_age[index]);
        }
        cout << "Error: Invalid index." << endl;
        // return Person("", 0);
    }
    // getters and setters
    string getName() const { return name; }
    int getAge() const { return age; }
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Copy Constructor
    Person(const Person &other) : name(other.name), age(other.age)
    {
        count_of_copy_constructors++;
    }

    // Arithmetic Operators (Person with Person)
    Person operator+(const Person &other) const
    {
        return Person(name, age + other.age);
    }
    Person operator-(const Person &other) const
    {
        return Person(name, age - other.age);
    }
    Person operator*(const Person &other) const
    {
        return Person(name, age * other.age);
    }
    Person operator/(const Person &other) const
    {
        if (other.age != 0)
            return Person(name, age / other.age);
        cout << "Error: Division by zero." << endl;
        return Person("", 0);
    }
    Person operator%(const Person &other) const
    {
        if (other.age != 0)
            return Person(name, age % other.age);
        cout << "Error: Division by zero." << endl;
        return Person("", 0);
    }

    // Arithmetic Operators (Person with int)
    Person operator+(int n) const { return Person(name, age + n); }
    Person operator-(int n) const { return Person(name, age - n); }
    Person operator*(int n) const { return Person(name, age * n); }
    Person operator/(int n) const
    {
        if (n != 0)
            return Person(name, age / n);
        cout << "Error: Division by zero." << endl;
        return Person("", 0);
    }
    Person operator%(int n) const
    {
        if (n != 0)
            return Person(name, age % n);
        cout << "Error: Division by zero." << endl;
        return Person("", 0);
    }

    // Increment/Decrement Operators
    Person operator++()
    {
        age++;
        return *this;
    }
    Person operator++(int)
    {
        Person temp = *this;
        age++;
        return temp;
    }
    Person operator--()
    {
        age--;
        return *this;
    }
    Person operator--(int)
    {
        Person temp = *this;
        age--;
        return temp;
    }
    // Relational Operators
    bool operator==(const Person &other) const
    {
        return name == other.name && age == other.age;
    }
    bool operator!=(const Person &other) const
    {
        return !(*this == other);
    }
    bool operator<(const Person &other) const
    {
        return age < other.age;
    }
    bool operator>(const Person &other) const
    {
        return age > other.age;
    }
    bool operator<=(const Person &other) const
    {
        return *this < other || *this == other;
    }
    bool operator>=(const Person &other) const
    {
        return *this > other || *this == other;
    }
    // Logical Operators
    bool operator&&(const Person &other) const
    {
        return age && other.age;
    }
    bool operator||(const Person &other) const
    {
        return age || other.age;
    }
    bool operator!() const
    {
        return !age;
    }
    // Bitwise Operators
    Person operator~() const
    {
        return Person(name, ~age);
    }
    Person operator&(const Person &other) const
    {
        return Person(name, age & other.age);
    }
    Person operator|(const Person &other) const
    {
        return Person(name, age | other.age);
    }
    Person operator^(const Person &other) const
    {
        return Person(name, age ^ other.age);
    }
    Person operator<<(int n) const
    {
        return Person(name, age << n);
    }
    Person operator>>(int n) const
    {
        return Person(name, age >> n);
    }

    // Compound Assignment Operators
    void operator+=(int n)
    {
        age += n;
    }
    void operator-=(int n)
    {
        age -= n;
    }
    void operator*=(int n)
    {
        age *= n;
    }
    void operator/=(int n)
    {
        if (n != 0)
            age /= n;
        else
            cout << "Error: Division by zero." << endl;
    }
    void operator%=(int n)
    {
        if (n != 0)
            age %= n;
        else
            cout << "Error: Division by zero." << endl;
    }
    friend ostream &operator<<(ostream &os, const Person &p);
    friend istream &operator>>(istream &is, Person &p);
    // Destructor
    ~Person() { 
        delete[] arr_string;
        delete[] arr_age;
        delete[] p_arry;
     }
    // Get Age
    int get_age() const { return age; }

    // Static Counter Display
    static void display_copy_count()
    {
        cout << "Copy constructor was called " << count_of_copy_constructors << " times." << endl;
    }
};

// Overload output operator
ostream &operator<<(ostream &os, const Person &p)
{
    os << "Name: " << p.name << ", Age: " << p.age;
    return os;
}
// Overload input operator
istream &operator>>(istream &is, Person &p)
{
    cout << "Enter name: ";
    is >> p.name;
    cout << "Enter age: ";
    is >> p.age;
    return is;
}

// Initialize static member
int Person::count_of_copy_constructors = 0;

// Test the class
int main()
{
    Person p1("John Doe", 25);
    Person p2("Jane Smith", 30);
    Person p3 = p1 + p2;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;
    cout << "p1 age: " << p1.get_age() << endl;
    cout << "p1 age after increment: " << ++p1 << endl;
    cout << "p1 age after decrement: " << --p1 << endl;
    cout << "p1 and p2 are equal: " << (p1 == p2) << endl;
    cout << "p1 and p2 are not equal: " << (p1 != p2) << endl;
    cout << "p1 is less than p2: " << (p1 < p2) << endl;
    cout << "p1 is greater than p2: " << (p1 > p2) << endl;
    Person p4 = p1;
    cout << "p4: " << p4 << endl;
    bool p5 = p1 && p2;
    cout << "p5: " << p5 << endl;
    bool p6 = p1 || p2;
    cout << "p6: " << p6 << endl;
    Person p7 = ~p1;
    cout << "p7: " << p7 << endl;
    Person p8 = p1 & p2;
    cout << "p8: " << p8 << endl;
    Person p9 = p1 | p2;
    cout << "p9: " << p9 << endl;
    Person p10 = p1 ^ p2;
    cout << "p10: " << p10 << endl;
    Person p11 = p1 << 2;
    cout << "p11: " << p11 << endl;
    Person p12 = p1 >> 2;
    cout << "p12: " << p12 << endl;
    p1 += 5;
    cout << "p1 after += 5: " << p1 << endl;
    p1 -= 5;
    cout << "p1 after -= 5: " << p1 << endl;
    p1 *= 5;
    cout << "p1 after *= 5: " << p1 << endl;
    p1 /= 5;
    cout << "p1 after /= 5: " << p1 << endl;
    p1 %= 5;
    cout << "p1 after %= 5: " << p1 << endl;
    Person::display_copy_count();

    return 0;
}

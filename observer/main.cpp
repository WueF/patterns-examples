#include <iostream>
#include <vector>
#include <algorithm>


class Observer
{
public:
    virtual void Notify(std::string param) =0;
};


class Observable
{
public:
    virtual void Attach(Observer* observer) = 0;
    virtual void Detach(Observer* observer) = 0;
    virtual void Notify(std::string param) = 0;

};

class Waiter : public Observer
{
private:
    std::string _name;
public:
    Waiter(std::string name)
    {
        _name = name;
    }
    virtual void Notify(std::string param)
    {
        std::cout<<_name<<" was notified with \""<<param<<"\" message!"<<std::endl;
    }
};

class Manager: public Observable
{
private:
    std::vector<Observer*> _observers;
public:
    virtual void Attach(Observer* observer)
    {
        _observers.push_back(observer);
    }

    virtual void Detach(Observer* observer)
    {
        _observers.erase(std::remove(_observers.begin(),_observers.end(),observer),_observers.end());
    }

    virtual void Notify(std::string param)
    {
        for(std::vector<Observer*>::const_iterator iter = _observers.begin(); iter != _observers.end(); ++iter)
        {
            if(*iter != 0)
            {
                (*iter)->Notify(param);
            }
        }
    }

};

int main() {

    Manager manager;

    Waiter* waiter = new Waiter("John Doe");
    Waiter* waitress = new Waiter("Olivia Doe");

    manager.Attach(waiter);
    manager.Attach(waitress);

    manager.Notify("Ping!");

    Waiter* newbie = new Waiter("Me myself and I");
    manager.Attach(newbie);
    manager.Detach(waitress);

    manager.Notify("Pong!");


    return 0;
}
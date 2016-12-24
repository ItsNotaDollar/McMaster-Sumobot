#**Custom Classes - State Logic**
This final project will show you how to write your own libraries in C++ and how to use them in your Arduino projects. We will create a '''StateController''' that we will use to implement a sate machine for the main logic of a Sumobot.

###Code Preview
It reccomended to have some knowledge about C++ before starting to write your own libraries. A good intro tutorial can be found [here]()<!-- todo -->. It would also be good to read up on the idea of State Machines, and how to design them before starting to write your code. Put a lots of time into your design, but remember to always try to keep your code modular so that when you envitably have to change something it is much easier to do so.

'''
class StateController {
  public:
    StateController();

    void setState(State newState);
    State getState();
  private:
    State currentState;
}
'''

###Additional Resources
- [C++ Tutorial]()
- [Class Structure in C++]()
- [Header Files in C++]()
- [Finite State Machines]()
- [State Machine Charts]()

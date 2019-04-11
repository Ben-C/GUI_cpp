#include "helloWorld.h"
#include <iostream>

HelloWorld::HelloWorld()
: m_button("Hello Wordl") // Creates a button with label "Hello World".
{
    //Set border width of window.
    set_border_width(10);

    //When button received "clicked" signal, it will call the
    //m_button_clicked() method defined below.
    m_button.signal_clicked().connect(sigc::mem_fun(*this, 
                &HelloWorld::on_button_clicked));
        
    //This packs the button into the Window (a container).
    add(m_button);

    //Final step is to display the button.
    m_button.show();

}

HelloWorld::~HelloWorld(){
}

void HelloWorld::on_button_clicked(){
    std::cout << "Hello World" << std::endl;
}
#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <iostream>
#include <stack>

class USBConnection
{
    private:
        int ID;
        static std::stack<int> ids;
        
        USBConnection()
        {
            ID = ids.top();
            ids.pop();
        }
    public:
        ~USBConnection()
        {
            ids.push(ID);
        }

        static USBConnection* CreateUsbConnection()
        {
            if(ids.empty() == 1)
            {
                return nullptr;
            }
            USBConnection* pointer = new USBConnection;
            return pointer;
        }

        int get_id()
        {
            return ID;
        }

};

std::stack<int> USBConnection::ids({3, 2, 1});


#endif // USBCONNECTION_H


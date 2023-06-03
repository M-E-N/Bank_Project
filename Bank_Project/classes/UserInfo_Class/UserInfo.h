//
// Created by mxerfan on 6/3/23.
//

#ifndef USERINFO_CLASS_USERINFO_H
#define USERINFO_CLASS_USERINFO_H

namespace UserInfo
{

    class UserInfo
    {
    private:
        string m_Name {};
        string m_Family {};
        int m_ID{};
    public :
        UserInfo(string Name , string Family , int ID):m_Name(Name), m_Family(Family), m_ID(ID){};

    };

} // UserInfo

#endif //USERINFO_CLASS_USERINFO_H

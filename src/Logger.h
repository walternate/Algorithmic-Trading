//
//  Logger.h
//  Algorithmic Trading SENG3011
//
//  Created on 03/03/15.
//  Copyright (c) Revitpo. All rights reserved.
//


#ifndef __Algorithmic_Trading__Logger__
#define __Algorithmic_Trading__Logger__


namespace std {
    class Logger;
}

#include "GlobalIncludes.h"
#include <iostream>


namespace std {


    class Logger {

    private:
        void writeFile(string filename, vector<string> data);
        vector<string> logData;

    public:
        static Logger standardLogger();
        void addLogLine(int type, string message);
        Logger(string devTeam, string modName, string params);
        ~Logger();
        void log(string msg);
    };

}



#endif

/*
    This file is part of reactor.
    
    Copyright (C) 2011  Álvaro Villalba Navarro <vn.alvaro@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include <config.h>
#include <stdio.h>

#include "global.h"
#include "database.h"
#include "user.h"
#include "log.h"

// TODO signal handlers


int main_loop(){
    
}

// TODO help

// TODO version

int main(int argc, char *argv[]) {
/* BY NOW THIS ONLY EXECUTES TESTS */
//     int retval = 0;
//     retval = main_loop();
//     return retval;
    programname = argv[0];
    l_notice("prova: %s", "l_notice");
    l_notice_e("prova: %s", "l_notice_e");
    l_warning("prova: %s", "l_warning");
    l_warning_e("prova: %s", "l_warning_e");
    l_error("prova: %s", "l_error");
    l_error_e("prova: %s", "l_error_e");
    debug("prova: %s", "l_debug");
    debug_e("prova: %s", "l_debug_e");
    User* u;
    for(u = load_users("users");u;u=u->next){
        printf(u->name);
        printf("\n");
    }

}

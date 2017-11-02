#ifndef COMMON_HEADER_GUARD 
#define COMMON_HEADER_GUARD

/*
 * common.h : A list/recompilation of common header files
 * 
 * Copyright 2017 Sampsa Riikonen and Petri Eranko.
 * 
 * Authors: Sampsa Riikonen <sampsa.riikonen@iki.fi>
 * 
 * This file is part of Valkka library.
 * 
 * Valkka is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Valkka is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Valkka.  If not, see <http://www.gnu.org/licenses/>. 
 * 
 */

/** 
 *  @file    common.h
 *  @author  Sampsa Riikonen
 *  @date    2017
 *  @version 0.1.0 
 *  
 *  @brief List of common header files
 *
 */

// coding style:
// http://csweb.cs.wfu.edu/~fulp/CSC112/codeStyle.html
// doxygen:
// https://www.stack.nl/~dimitri/doxygen/manual/

#include <stdlib.h>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <string>

#include <iostream>
#include <fstream> // https://stackoverflow.com/questions/9816900/infile-incomplete-type-error
#include <iomanip>
#include <iterator>
#include <sstream>

#include <vector>  
#include <algorithm>
#include <sys/time.h>
// #include <sys/sysinfo.h>

#include <map>
#include <list>

#include <chrono> 
#include <thread>

#include <sched.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>

#endif


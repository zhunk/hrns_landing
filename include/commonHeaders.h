/**
 * @file commonHeaders.h
 * @author yuntian li (yuntianlee91@hotmail.com)
 * @brief  
 * @version 0.1
 * @date 2020-04-12
 * 
 * @copyright Copyright (c) 2020. The source code is under GPL v3 license.
 * 
 */
#pragma once
// ========= std lib ============= //
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
// ========= io headers ========== //
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <sys/stat.h>
// ========== container ========== //
#include <vector>
#include <map>
#include <queue>
#include <iterator>
#include <string>
// ========== math ========== //
#include <cmath>
#include <random>
// ========== multi thread == //
#include <mutex>
#include <thread>
#include <condition_variable>
// third_party headers
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
// custom header
#include "constParams.h"
// ========== type def ======== //
typedef unsigned long ulong;
typedef Eigen::VectorXd VecXd;
typedef Eigen::MatrixXd MatXd;
typedef Eigen::Matrix<double, 1, 1> Vec1d;
typedef Eigen::Matrix<double, 1, 1> Mat1d;
typedef Eigen::Matrix<double, 2, 1> Vec2d;
typedef Eigen::Matrix<double, 2, 2> Mat2d;
typedef Eigen::Vector3d Vec3d;
typedef Eigen::Matrix3d Mat3d;
typedef Eigen::Matrix<double, 4, 1> Vec4d;
typedef Eigen::Matrix<double, 4, 4> Mat4d;
typedef Eigen::Matrix<double, 6, 1> Vec6d;
typedef Eigen::Matrix<double, 6, 6> Mat6d;
typedef Eigen::Matrix<double, 8, 1> Vec8d;
typedef Eigen::Matrix<double, 8, 8> Mat8d;


typedef Eigen::Quaterniond Qd; 


#include "hpp/spline/bezier_curve.h"
#include "hpp/spline/linear_variable.h"

#include <vector>

#ifndef _DEFINITION_PYTHON_BINDINGS
#define _DEFINITION_PYTHON_BINDINGS


namespace spline
{

typedef double real;
typedef Eigen::Vector3d point_t;
typedef Eigen::VectorXd vectorX_t;
typedef Eigen::Matrix<double, 6, 1, 0, 6, 1> point6_t;
typedef Eigen::Matrix<double, 3, 1, 0, 3, 1> ret_point_t;
typedef Eigen::Matrix<double, 6, 1, 0, 6, 1> ret_point6_t;
typedef Eigen::VectorXd time_waypoints_t;
typedef Eigen::Matrix<real, 3, Eigen::Dynamic> point_list_t;
typedef Eigen::Matrix<real, 6, Eigen::Dynamic> point_list6_t;
typedef std::vector<point_t,Eigen::aligned_allocator<point_t> >  t_point_t;
typedef std::vector<point6_t,Eigen::aligned_allocator<point6_t> >  t_point6_t;
typedef std::pair<real, point_t> Waypoint;
typedef std::vector<Waypoint> T_Waypoint;
typedef std::pair<real, point6_t> Waypoint6;
typedef std::vector<Waypoint6> T_Waypoint6;



template <typename PointList, typename T_Point>
T_Point vectorFromEigenArray(const PointList& array)
{
    T_Point res;
    for(int i =0;i<array.cols();++i)
        res.push_back(array.col(i));
    return res;
}

} //namespace spline.


#endif //_DEFINITION_PYTHON_BINDINGS
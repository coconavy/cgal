// ============================================================================
//
// Copyright (c) 1998 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//

// release       :
// release_date  :
//
// file          : include/CGAL/Cartesian/basic_constructions_2.h
// source        : include/CGAL/Cartesian/basic_constructions_2.h
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Herve Bronnimann (hbronni@sophia.inria.fr)
//
// coordinator   : INRIA Sophia-Antipolis (Herve.Bronnimann@sophia.inria.fr)
//
// ============================================================================


#ifndef CGAL_CARTESIAN_BASIC_CONSTRUCTIONS_2_H
#define CGAL_CARTESIAN_BASIC_CONSTRUCTIONS_2_H

#include <utility>

#ifndef CGAL_CARTESIAN_REDEFINE_NAMES_2_H
#include <CGAL/Cartesian/redefine_names_2.h>
#endif

#ifndef CGAL_CARTESIAN_POINT_2_H
#include <CGAL/Cartesian/Point_2.h>
#endif

CGAL_BEGIN_NAMESPACE

template < class R >
inline
PointC2<R CGAL_CTAG>
midpoint( PointC2<R CGAL_CTAG> const& p,
          PointC2<R CGAL_CTAG> const& q )
{
  typename R::FT x,y;
  midpointC2(p.x(),p.y(),q.x(),q.y(),x,y);
  return PointC2<R CGAL_CTAG>(x,y);
}

template < class R >
inline
PointC2<R CGAL_CTAG>
circumcenter( PointC2<R CGAL_CTAG> const& p,
              PointC2<R CGAL_CTAG> const& q,
              PointC2<R CGAL_CTAG> const& r)
{
  typename R::FT x,y;
  circumcenterC2(p.x(),p.y(),q.x(),q.y(),r.x(),r.y(),x,y);
  return PointC2<R CGAL_CTAG>(x,y);
}

template < class R >
inline
LineC2<R CGAL_CTAG>
line_from_points( PointC2<R CGAL_CTAG> const& p,
                    PointC2<R CGAL_CTAG> const& q)
{
  typename R::FT a,b,c;
  line_from_pointsC2(p.x(),p.y(),q.x(),q.y(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

template < class R >
inline
LineC2<R CGAL_CTAG>
line_from_point_direction( PointC2<R CGAL_CTAG> const& p,
                           DirectionC2<R CGAL_CTAG> const& d)
{
  typename R::FT a,b,c;
  line_from_point_directionC2(p.x(),p.y(),d.dx(),d.dy(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

template < class R >
inline
typename R::FT
line_y_at_x( LineC2<R CGAL_CTAG> const& l,
             typename R::FT const& x)
{
  return line_y_at_xC2(l.a(), l.b(), l.c(), x);
}

template < class R >
inline
typename R::FT
line_x_at_y( LineC2<R CGAL_CTAG> const& l,
             typename R::FT const& y)
{
  return line_y_at_xC2(l.b(), l.a(), l.c(), y);
}

template < class R >
inline
PointC2<R>
line_get_point( LineC2<R CGAL_CTAG> const& l, int i)
{
  typename R::FT x, y;
  line_get_pointC2(l.a(), l.b(), l.c(), i, x, y);
  return PointC2<R>(x,y);
}

template < class R >
inline
PointC2<R>
line_project_point( LineC2<R CGAL_CTAG> const& l,
                    PointC2<R CGAL_CTAG> const& p)
{
  typename R::FT x, y;
  line_project_pointC2(l.a(), l.b(), l.c(), p.x(), p.y());
  return PointC2<R>(x,y);
}

template < class R >
inline
Oriented_side
line_oriented_side( LineC2<R CGAL_CTAG> const& l,
                    PointC2<R CGAL_CTAG> const& p)
{
  return line_oriented_sideC2(l.a(), l.b(), l.c(), p.x(), p.y());
}

template < class R >
inline
typename R::FT
squared_circumradius( PointC2<R CGAL_CTAG> const& p,
                      PointC2<R CGAL_CTAG> const& q,
                      PointC2<R CGAL_CTAG> const& r)
{
  return squared_circumradiusC2(p.x(),p.y(),q.x(),q.y(),r.x(),r.y());
}

template < class R >
inline
PointC2<R CGAL_CTAG>
squared_circumcircle( PointC2<R CGAL_CTAG> const& p,
                      PointC2<R CGAL_CTAG> const& q,
                      PointC2<R CGAL_CTAG> const& r,
                      typename R::FT &radius)
{
  typename R::FT x,y;
  radius = squared_circumradiusC2(p.x(),p.y(),q.x(),q.y(),r.x(),r.y(),x,y);
  return PointC2<R CGAL_CTAG>(x,y);
}

template < class R >
inline
typename R::FT
squared_distance( PointC2<R CGAL_CTAG> const& p,
                  PointC2<R CGAL_CTAG> const& q)
{
  return squared_distanceC2(p.x(),p.y(),q.x(),q.y());
}

template < class R >
inline
typename R::FT
scaled_distance_to_line( LineC2<R CGAL_CTAG> const& l,
                         PointC2<R CGAL_CTAG> const& p)
{
  return scaled_distance_to_lineC2(l.a(),l.b(),l.c(),p.x(),p.y());
}

template < class R >
inline
typename R::FT
scaled_distance_to_line( PointC2<R CGAL_CTAG> const& p,
                         PointC2<R CGAL_CTAG> const& q,
                         PointC2<R CGAL_CTAG> const& r)
{
  return scaled_distance_to_lineC2(p.x(),p.y(),q.x(),q.y(),r.x(),r.y());
}


CGAL_END_NAMESPACE

#endif // CGAL_CARTESIAN_BASIC_CONSTRUCTIONS_2_H

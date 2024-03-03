#ifndef TWO_MAT_SPHERE_H
#define TWO_MAT_SPHERE_H

#include "hittable.h"
#include "vec3.h"

// A modified sphere class which takes in a second material and axis.
class two_mat_sphere : public hittable {
    public:
        two_mat_sphere(point3 _center, double _radius, shared_ptr<material> _material0, shared_ptr<material> _material1, vec3 _axis)
            : center(_center), radius(_radius), mat1(_material0), mat2(_material1), axis(_axis) {} 

        bool hit(const ray& r, interval ray_t, hit_record& rec) const override {
            vec3 oc = r.origin() - center;
            auto a = r.direction().length_squared();
            auto half_b = dot(oc, r.direction());
            auto c = oc.length_squared() - radius*radius;
            auto discriminant = half_b*half_b - a*c;
            if (discriminant < 0) return false;
            auto sqrtd = sqrt(discriminant);

            auto root = (-half_b - sqrtd) / a;
            if (!ray_t.surrounds(root)) {
                root = (-half_b + sqrtd) / a;
                if (!ray_t.surrounds(root))
                    return false;
            }
            
            rec.t = root;
            rec.p = r.at(rec.t);
            vec3 outward_normal = (rec.p - center)/radius;
            rec.set_face_normal(r, outward_normal);
            
            rec.mat = mat1;  // record first material
            rec.mat2 = mat2;  // record second material
            rec.axis = axis;    // record axis

            return true;
        }

    private:
        point3 center;
        double radius;
        shared_ptr<material> mat1;
        shared_ptr<material> mat2;
        vec3 axis;
};

#endif

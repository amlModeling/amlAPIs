// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SupportedRoleClass.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_SUPPORTEDROLECLASS_HPP
#define CAEX_SUPPORTEDROLECLASS_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(SupportedRoleClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class SupportedRoleClass: public virtual ::caex::CAEXBasicObject
    {
    public:
        SupportedRoleClass();

        virtual ~SupportedRoleClass();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefRoleClassPath() const;
        void setRefRoleClassPath(::type::String _refRoleClassPath);

        // References
        ::caex::Mapping_ptr getMappingObject();
        void setMappingObject(::caex::Mapping_ptr _mappingObject);

        ::caex::RoleClass_ptr getRoleClass();
        void setRoleClass(::caex::RoleClass_ptr _roleClass);

        /*PROTECTED REGION ID(SupportedRoleClass) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(SupportedRoleClassImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refRoleClassPath;

        // References

        ::caex::Mapping_ptr m_mappingObject;

        ::caex::RoleClass_ptr m_roleClass;

    };

} // caex

#endif // CAEX_SUPPORTEDROLECLASS_HPP


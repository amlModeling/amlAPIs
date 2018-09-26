// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleClass.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ROLECLASS_HPP
#define CAEX_ROLECLASS_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXObject.hpp>

/*PROTECTED REGION ID(RoleClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class RoleClass: public virtual ::caex::CAEXObject
    {
    public:
        RoleClass();

        virtual ~RoleClass();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefBaseClassPath() const;
        void setRefBaseClassPath(::type::String _refBaseClassPath);

        // References
        ::ecorecpp::mapping::EList< ::caex::Attribute >& getAttribute();

        ::ecorecpp::mapping::EList< ::caex::ExternalInterface >& getExternalInterface();

        ::caex::RoleClass_ptr getBaseClass();
        void setBaseClass(::caex::RoleClass_ptr _baseClass);

        ::ecorecpp::mapping::EList< ::caex::RoleClass >& getRoleClass();

        /*PROTECTED REGION ID(RoleClass) START*/
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

        /*PROTECTED REGION ID(RoleClassImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refBaseClassPath;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Attribute > > m_attribute;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::ExternalInterface > > m_externalInterface;

        ::caex::RoleClass_ptr m_baseClass;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::RoleClass > > m_roleClass;

    };

} // caex

#endif // CAEX_ROLECLASS_HPP


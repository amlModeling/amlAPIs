// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceClass.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_INTERFACECLASS_HPP
#define CAEX_INTERFACECLASS_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXObject.hpp>

/*PROTECTED REGION ID(InterfaceClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class InterfaceClass: public virtual ::caex::CAEXObject
    {
    public:
        InterfaceClass();

        virtual ~InterfaceClass();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefBaseClassPath() const;
        void setRefBaseClassPath(::type::String _refBaseClassPath);

        // References
        ::ecorecpp::mapping::EList< ::caex::Attribute >& getAttribute();

        ::caex::InterfaceClass_ptr getBaseClass();
        void setBaseClass(::caex::InterfaceClass_ptr _baseClass);

        ::ecorecpp::mapping::EList< ::caex::InterfaceClass >& getInterfaceClass();

        ::ecorecpp::mapping::EList< ::caex::InterfaceClass >& getExternalInterface();

        /*PROTECTED REGION ID(InterfaceClass) START*/
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

        /*PROTECTED REGION ID(InterfaceClassImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refBaseClassPath;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Attribute > > m_attribute;

        ::caex::InterfaceClass_ptr m_baseClass;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceClass > > m_interfaceClass;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceClass > > m_externalInterface;

    };

} // caex

#endif // CAEX_INTERFACECLASS_HPP


// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Copyright.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_COPYRIGHT_HPP
#define CAEX_COPYRIGHT_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(Copyright_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class Copyright: public virtual ::ecore::EObject

    {
    public:
        Copyright();

        virtual ~Copyright();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getValue() const;
        void setValue(::type::String _value);

        ::caex::ChangeMode getChangeMode() const;
        void setChangeMode(::caex::ChangeMode _changeMode);

        // References

        /*PROTECTED REGION ID(Copyright) START*/
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

        /*PROTECTED REGION ID(CopyrightImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_value;

        ::caex::ChangeMode m_changeMode;

        // References

    };

} // caex

#endif // CAEX_COPYRIGHT_HPP


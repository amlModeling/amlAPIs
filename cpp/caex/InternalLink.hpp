// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalLink.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_INTERNALLINK_HPP
#define CAEX_INTERNALLINK_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXObject.hpp>

/*PROTECTED REGION ID(InternalLink_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class InternalLink: public virtual ::caex::CAEXObject
    {
    public:
        InternalLink();

        virtual ~InternalLink();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefPartnerSideA() const;
        void setRefPartnerSideA(::type::String _refPartnerSideA);

        ::type::String getRefPartnerSideB() const;
        void setRefPartnerSideB(::type::String _refPartnerSideB);

        // References
        ::caex::InterfaceClass_ptr getPartnerSideA();
        void setPartnerSideA(::caex::InterfaceClass_ptr _partnerSideA);

        ::caex::InterfaceClass_ptr getPartnerSideB();
        void setPartnerSideB(::caex::InterfaceClass_ptr _partnerSideB);

        /*PROTECTED REGION ID(InternalLink) START*/
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

        /*PROTECTED REGION ID(InternalLinkImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refPartnerSideA;

        ::type::String m_refPartnerSideB;

        // References

        ::caex::InterfaceClass_ptr m_partnerSideA;

        ::caex::InterfaceClass_ptr m_partnerSideB;

    };

} // caex

#endif // CAEX_INTERNALLINK_HPP


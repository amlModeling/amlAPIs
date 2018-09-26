// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SourceDocumentInformation.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_SOURCEDOCUMENTINFORMATION_HPP
#define CAEX_SOURCEDOCUMENTINFORMATION_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(SourceDocumentInformation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class SourceDocumentInformation: public virtual ::ecore::EObject

    {
    public:
        SourceDocumentInformation();

        virtual ~SourceDocumentInformation();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::DateTime getLastWritingDateTime() const;
        void setLastWritingDateTime(::type::DateTime _lastWritingDateTime);

        ::type::String getOriginID() const;
        void setOriginID(::type::String _originID);

        ::type::String getOriginName() const;
        void setOriginName(::type::String _originName);

        ::type::String getOriginProjectID() const;
        void setOriginProjectID(::type::String _originProjectID);

        ::type::String getOriginProjectTitle() const;
        void setOriginProjectTitle(::type::String _originProjectTitle);

        ::type::String getOriginRelease() const;
        void setOriginRelease(::type::String _originRelease);

        ::type::String getOriginVendor() const;
        void setOriginVendor(::type::String _originVendor);

        ::type::String getOriginVendorURL() const;
        void setOriginVendorURL(::type::String _originVendorURL);

        ::type::String getOriginVersion() const;
        void setOriginVersion(::type::String _originVersion);

        // References

        /*PROTECTED REGION ID(SourceDocumentInformation) START*/
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

        /*PROTECTED REGION ID(SourceDocumentInformationImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::DateTime m_lastWritingDateTime;

        ::type::String m_originID;

        ::type::String m_originName;

        ::type::String m_originProjectID;

        ::type::String m_originProjectTitle;

        ::type::String m_originRelease;

        ::type::String m_originVendor;

        ::type::String m_originVendorURL;

        ::type::String m_originVersion;

        // References

    };

} // caex

#endif // CAEX_SOURCEDOCUMENTINFORMATION_HPP


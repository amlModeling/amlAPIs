// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXBasicObject.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_CAEXBASICOBJECT_HPP
#define CAEX_CAEXBASICOBJECT_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(CAEXBasicObject_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class CAEXBasicObject: public virtual ::ecore::EObject

    {
    public:
        CAEXBasicObject();

        virtual ~CAEXBasicObject();

        virtual void _initialize();

        // Operations

        // Attributes
        ::caex::ChangeMode getChangeMode() const;
        void setChangeMode(::caex::ChangeMode _changeMode);

        // References
        ::caex::Description_ptr getDescription();
        void setDescription(::caex::Description_ptr _description);

        ::caex::Version_ptr getVersion();
        void setVersion(::caex::Version_ptr _version);

        ::ecorecpp::mapping::EList< ::caex::Revision >& getRevision();

        ::caex::Copyright_ptr getCopyright();
        void setCopyright(::caex::Copyright_ptr _copyright);

        ::ecorecpp::mapping::EList< ::caex::AdditionalInformation >& getAdditionalInformation();

        /*PROTECTED REGION ID(CAEXBasicObject) START*/
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

        /*PROTECTED REGION ID(CAEXBasicObjectImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::caex::ChangeMode m_changeMode;

        // References

        ::caex::Description_ptr m_description;

        ::caex::Version_ptr m_version;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Revision > > m_revision;

        ::caex::Copyright_ptr m_copyright;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::AdditionalInformation > > m_additionalInformation;

    };

} // caex

#endif // CAEX_CAEXBASICOBJECT_HPP


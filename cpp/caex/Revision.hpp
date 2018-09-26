// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Revision.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_REVISION_HPP
#define CAEX_REVISION_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(Revision_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class Revision: public virtual ::caex::CAEXBasicObject
    {
    public:
        Revision();

        virtual ~Revision();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::DateTime getRevisionDate() const;
        void setRevisionDate(::type::DateTime _revisionDate);

        ::type::String getOldVersion() const;
        void setOldVersion(::type::String _oldVersion);

        ::type::String getNewVersion() const;
        void setNewVersion(::type::String _newVersion);

        ::type::String getAuthorName() const;
        void setAuthorName(::type::String _authorName);

        ::type::String getComment() const;
        void setComment(::type::String _comment);

        // References

        /*PROTECTED REGION ID(Revision) START*/
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

        /*PROTECTED REGION ID(RevisionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::DateTime m_revisionDate;

        ::type::String m_oldVersion;

        ::type::String m_newVersion;

        ::type::String m_authorName;

        ::type::String m_comment;

        // References

    };

} // caex

#endif // CAEX_REVISION_HPP


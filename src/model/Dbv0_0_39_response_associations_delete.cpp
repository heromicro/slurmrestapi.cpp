/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_39_response_associations_delete.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



Dbv0_0_39_response_associations_delete::Dbv0_0_39_response_associations_delete()
{
    m_MetaIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
    m_Removed_associationsIsSet = false;
}

Dbv0_0_39_response_associations_delete::~Dbv0_0_39_response_associations_delete()
{
}

void Dbv0_0_39_response_associations_delete::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_39_response_associations_delete::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }
    if(m_Removed_associationsIsSet)
    {
        val[utility::conversions::to_string_t(U("removed_associations"))] = ModelBase::toJson(m_Removed_associations);
    }

    return val;
}

bool Dbv0_0_39_response_associations_delete::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_39_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_39_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Dbv0_0_39_warning>> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("removed_associations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("removed_associations")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setRemovedAssociations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRemovedAssociations);
            setRemovedAssociations(refVal_setRemovedAssociations);
        }
    }
    return ok;
}

void Dbv0_0_39_response_associations_delete::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
    if(m_Removed_associationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("removed_associations")), m_Removed_associations));
    }
}

bool Dbv0_0_39_response_associations_delete::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<Dbv0_0_39_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_39_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::vector<std::shared_ptr<Dbv0_0_39_warning>> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("removed_associations"))))
    {
        std::vector<utility::string_t> refVal_setRemovedAssociations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("removed_associations"))), refVal_setRemovedAssociations );
        setRemovedAssociations(refVal_setRemovedAssociations);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_39_meta> Dbv0_0_39_response_associations_delete::getMeta() const
{
    return m_Meta;
}

void Dbv0_0_39_response_associations_delete::setMeta(const std::shared_ptr<Dbv0_0_39_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool Dbv0_0_39_response_associations_delete::metaIsSet() const
{
    return m_MetaIsSet;
}

void Dbv0_0_39_response_associations_delete::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_39_error>>& Dbv0_0_39_response_associations_delete::getErrors()
{
    return m_Errors;
}

void Dbv0_0_39_response_associations_delete::setErrors(const std::vector<std::shared_ptr<Dbv0_0_39_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool Dbv0_0_39_response_associations_delete::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void Dbv0_0_39_response_associations_delete::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<Dbv0_0_39_warning>>& Dbv0_0_39_response_associations_delete::getWarnings()
{
    return m_Warnings;
}

void Dbv0_0_39_response_associations_delete::setWarnings(const std::vector<std::shared_ptr<Dbv0_0_39_warning>>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool Dbv0_0_39_response_associations_delete::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void Dbv0_0_39_response_associations_delete::unsetWarnings()
{
    m_WarningsIsSet = false;
}
std::vector<utility::string_t>& Dbv0_0_39_response_associations_delete::getRemovedAssociations()
{
    return m_Removed_associations;
}

void Dbv0_0_39_response_associations_delete::setRemovedAssociations(const std::vector<utility::string_t>& value)
{
    m_Removed_associations = value;
    m_Removed_associationsIsSet = true;
}

bool Dbv0_0_39_response_associations_delete::removedAssociationsIsSet() const
{
    return m_Removed_associationsIsSet;
}

void Dbv0_0_39_response_associations_delete::unsetRemoved_associations()
{
    m_Removed_associationsIsSet = false;
}
}
}
}
}



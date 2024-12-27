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



#include "slurmrestapi/model/Dbv0_0_39_error.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



Dbv0_0_39_error::Dbv0_0_39_error()
{
    m_Error_number = 0;
    m_Error_numberIsSet = false;
    m_Error = utility::conversions::to_string_t("");
    m_ErrorIsSet = false;
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
}

Dbv0_0_39_error::~Dbv0_0_39_error()
{
}

void Dbv0_0_39_error::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_39_error::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Error_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("error_number"))] = ModelBase::toJson(m_Error_number);
    }
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t(U("error"))] = ModelBase::toJson(m_Error);
    }
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t(U("source"))] = ModelBase::toJson(m_Source);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }

    return val;
}

bool Dbv0_0_39_error::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("error_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error_number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setErrorNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorNumber);
            setErrorNumber(refVal_setErrorNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setError;
            ok &= ModelBase::fromJson(fieldValue, refVal_setError);
            setError(refVal_setError);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("source"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("source")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSource;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSource);
            setSource(refVal_setSource);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    return ok;
}

void Dbv0_0_39_error::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Error_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error_number")), m_Error_number));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error")), m_Error));
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("source")), m_Source));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
}

bool Dbv0_0_39_error::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("error_number"))))
    {
        int32_t refVal_setErrorNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error_number"))), refVal_setErrorNumber );
        setErrorNumber(refVal_setErrorNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("error"))))
    {
        utility::string_t refVal_setError;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error"))), refVal_setError );
        setError(refVal_setError);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("source"))))
    {
        utility::string_t refVal_setSource;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("source"))), refVal_setSource );
        setSource(refVal_setSource);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    return ok;
}

int32_t Dbv0_0_39_error::getErrorNumber() const
{
    return m_Error_number;
}

void Dbv0_0_39_error::setErrorNumber(int32_t value)
{
    m_Error_number = value;
    m_Error_numberIsSet = true;
}

bool Dbv0_0_39_error::errorNumberIsSet() const
{
    return m_Error_numberIsSet;
}

void Dbv0_0_39_error::unsetError_number()
{
    m_Error_numberIsSet = false;
}
utility::string_t Dbv0_0_39_error::getError() const
{
    return m_Error;
}

void Dbv0_0_39_error::setError(const utility::string_t& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool Dbv0_0_39_error::errorIsSet() const
{
    return m_ErrorIsSet;
}

void Dbv0_0_39_error::unsetError()
{
    m_ErrorIsSet = false;
}
utility::string_t Dbv0_0_39_error::getSource() const
{
    return m_Source;
}

void Dbv0_0_39_error::setSource(const utility::string_t& value)
{
    m_Source = value;
    m_SourceIsSet = true;
}

bool Dbv0_0_39_error::sourceIsSet() const
{
    return m_SourceIsSet;
}

void Dbv0_0_39_error::unsetSource()
{
    m_SourceIsSet = false;
}
utility::string_t Dbv0_0_39_error::getDescription() const
{
    return m_Description;
}

void Dbv0_0_39_error::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Dbv0_0_39_error::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Dbv0_0_39_error::unsetDescription()
{
    m_DescriptionIsSet = false;
}
}
}
}
}



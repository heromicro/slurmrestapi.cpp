/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_37_error.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_37_error::V0_0_37_error()
{
    m_Error = utility::conversions::to_string_t("");
    m_ErrorIsSet = false;
    m_Errno = 0;
    m_ErrnoIsSet = false;
}

V0_0_37_error::~V0_0_37_error()
{
}

void V0_0_37_error::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_37_error::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t(U("error"))] = ModelBase::toJson(m_Error);
    }
    if(m_ErrnoIsSet)
    {
        val[utility::conversions::to_string_t(U("errno"))] = ModelBase::toJson(m_Errno);
    }

    return val;
}

bool V0_0_37_error::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("errno"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errno")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setErrno;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrno);
            setErrno(refVal_setErrno);
        }
    }
    return ok;
}

void V0_0_37_error::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error")), m_Error));
    }
    if(m_ErrnoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errno")), m_Errno));
    }
}

bool V0_0_37_error::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("error"))))
    {
        utility::string_t refVal_setError;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error"))), refVal_setError );
        setError(refVal_setError);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errno"))))
    {
        int32_t refVal_setErrno;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errno"))), refVal_setErrno );
        setErrno(refVal_setErrno);
    }
    return ok;
}

utility::string_t V0_0_37_error::getError() const
{
    return m_Error;
}

void V0_0_37_error::setError(const utility::string_t& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool V0_0_37_error::errorIsSet() const
{
    return m_ErrorIsSet;
}

void V0_0_37_error::unsetError()
{
    m_ErrorIsSet = false;
}
int32_t V0_0_37_error::getErrno() const
{
    return m_Errno;
}

void V0_0_37_error::setErrno(int32_t value)
{
    m_Errno = value;
    m_ErrnoIsSet = true;
}

bool V0_0_37_error::errnoIsSet() const
{
    return m_ErrnoIsSet;
}

void V0_0_37_error::unsetErrno()
{
    m_ErrnoIsSet = false;
}
}
}
}
}



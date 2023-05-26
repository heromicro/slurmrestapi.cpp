/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_38_signal.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

V0_0_38_signal::eV0_0_38_signal toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("HUP")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_HUP;
    if (val == utility::conversions::to_string_t(U("INT")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_INT;
    if (val == utility::conversions::to_string_t(U("QUIT")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_QUIT;
    if (val == utility::conversions::to_string_t(U("ABRT")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_ABRT;
    if (val == utility::conversions::to_string_t(U("KILL")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_KILL;
    if (val == utility::conversions::to_string_t(U("ALRM")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_ALRM;
    if (val == utility::conversions::to_string_t(U("TERM")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TERM;
    if (val == utility::conversions::to_string_t(U("USR1")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_USR1;
    if (val == utility::conversions::to_string_t(U("USR2")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_USR2;
    if (val == utility::conversions::to_string_t(U("URG")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_URG;
    if (val == utility::conversions::to_string_t(U("CONT")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_CONT;
    if (val == utility::conversions::to_string_t(U("STOP")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_STOP;
    if (val == utility::conversions::to_string_t(U("TSTP")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TSTP;
    if (val == utility::conversions::to_string_t(U("TTIN")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TTIN;
    if (val == utility::conversions::to_string_t(U("TTOU")))
        return V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TTOU;
    return {};
}

EnumUnderlyingType fromEnum(V0_0_38_signal::eV0_0_38_signal e)
{
    switch (e)
    {
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_HUP:
        return U("HUP");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_INT:
        return U("INT");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_QUIT:
        return U("QUIT");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_ABRT:
        return U("ABRT");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_KILL:
        return U("KILL");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_ALRM:
        return U("ALRM");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TERM:
        return U("TERM");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_USR1:
        return U("USR1");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_USR2:
        return U("USR2");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_URG:
        return U("URG");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_CONT:
        return U("CONT");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_STOP:
        return U("STOP");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TSTP:
        return U("TSTP");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TTIN:
        return U("TTIN");
    case V0_0_38_signal::eV0_0_38_signal::V0_0_38_signal_TTOU:
        return U("TTOU");
    default:
        break;
    }
    return {};
}
}

V0_0_38_signal::V0_0_38_signal()
{
}

V0_0_38_signal::~V0_0_38_signal()
{
}

void V0_0_38_signal::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_38_signal::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool V0_0_38_signal::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void V0_0_38_signal::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool V0_0_38_signal::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

V0_0_38_signal::eV0_0_38_signal V0_0_38_signal::getValue() const
{
   return m_value;
}

void V0_0_38_signal::setValue(V0_0_38_signal::eV0_0_38_signal const value)
{
   m_value = value;
}


}
}
}
}



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



#include "slurmrestapi/model/Dbv0_0_38_cluster_info_associations.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_cluster_info_associations::Dbv0_0_38_cluster_info_associations()
{
    m_RootIsSet = false;
}

Dbv0_0_38_cluster_info_associations::~Dbv0_0_38_cluster_info_associations()
{
}

void Dbv0_0_38_cluster_info_associations::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_cluster_info_associations::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RootIsSet)
    {
        val[utility::conversions::to_string_t(U("root"))] = ModelBase::toJson(m_Root);
    }

    return val;
}

bool Dbv0_0_38_cluster_info_associations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("root"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("root")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_association_short_info> refVal_setRoot;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRoot);
            setRoot(refVal_setRoot);
        }
    }
    return ok;
}

void Dbv0_0_38_cluster_info_associations::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RootIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("root")), m_Root));
    }
}

bool Dbv0_0_38_cluster_info_associations::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("root"))))
    {
        std::shared_ptr<Dbv0_0_38_association_short_info> refVal_setRoot;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("root"))), refVal_setRoot );
        setRoot(refVal_setRoot);
    }
    return ok;
}

std::shared_ptr<Dbv0_0_38_association_short_info> Dbv0_0_38_cluster_info_associations::getRoot() const
{
    return m_Root;
}

void Dbv0_0_38_cluster_info_associations::setRoot(const std::shared_ptr<Dbv0_0_38_association_short_info>& value)
{
    m_Root = value;
    m_RootIsSet = true;
}

bool Dbv0_0_38_cluster_info_associations::rootIsSet() const
{
    return m_RootIsSet;
}

void Dbv0_0_38_cluster_info_associations::unsetRoot()
{
    m_RootIsSet = false;
}
}
}
}
}


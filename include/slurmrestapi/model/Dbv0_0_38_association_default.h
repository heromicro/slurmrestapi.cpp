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

/*
 * Dbv0_0_38_association_default.h
 *
 * Default settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_default_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_default_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Default settings
/// </summary>
class  Dbv0_0_38_association_default
    : public ModelBase
{
public:
    Dbv0_0_38_association_default();
    virtual ~Dbv0_0_38_association_default();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_association_default members

    /// <summary>
    /// Default QOS
    /// </summary>
    utility::string_t getQos() const;
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const utility::string_t& value);


protected:
    utility::string_t m_Qos;
    bool m_QosIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_default_H_ */
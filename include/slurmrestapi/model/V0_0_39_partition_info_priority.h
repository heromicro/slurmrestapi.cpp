/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_partition_info_priority.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_priority_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_priority_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  V0_0_39_partition_info_priority
    : public ModelBase
{
public:
    V0_0_39_partition_info_priority();
    virtual ~V0_0_39_partition_info_priority();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_partition_info_priority members

    /// <summary>
    /// 
    /// </summary>
    int32_t getTier() const;
    bool tierIsSet() const;
    void unsetTier();

    void setTier(int32_t value);


protected:
    int32_t m_Tier;
    bool m_TierIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_priority_H_ */
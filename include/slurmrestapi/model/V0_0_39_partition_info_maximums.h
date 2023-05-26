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
 * V0_0_39_partition_info_maximums.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_maximums_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_maximums_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_uint16_no_val.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_uint16_no_val;

/// <summary>
/// 
/// </summary>
class  V0_0_39_partition_info_maximums
    : public ModelBase
{
public:
    V0_0_39_partition_info_maximums();
    virtual ~V0_0_39_partition_info_maximums();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_partition_info_maximums members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint16_no_val> getOverTimeLimit() const;
    bool overTimeLimitIsSet() const;
    void unsetOver_time_limit();

    void setOverTimeLimit(const std::shared_ptr<V0_0_39_uint16_no_val>& value);


protected:
    std::shared_ptr<V0_0_39_uint16_no_val> m_Over_time_limit;
    bool m_Over_time_limitIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_maximums_H_ */
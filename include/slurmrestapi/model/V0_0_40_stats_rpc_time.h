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

/*
 * V0_0_40_stats_rpc_time.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_rpc_time_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_rpc_time_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_stats_rpc_time
    : public ModelBase
{
public:
    V0_0_40_stats_rpc_time();
    virtual ~V0_0_40_stats_rpc_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_stats_rpc_time members

    /// <summary>
    /// Average RPC processing time in microseconds
    /// </summary>
    int64_t getAverage() const;
    bool averageIsSet() const;
    void unsetAverage();

    void setAverage(int64_t value);

    /// <summary>
    /// Total RPC processing time in microseconds
    /// </summary>
    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(int64_t value);


protected:
    int64_t m_Average;
    bool m_AverageIsSet;
    int64_t m_Total;
    bool m_TotalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_rpc_time_H_ */

/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIMessageReactionResponse.h
 *
 * 
 */

#ifndef OAIMessageReactionResponse_H
#define OAIMessageReactionResponse_H

#include <QJsonObject>

#include "OAIMessageReactionCountDetailsResponse.h"
#include "OAIMessageReactionEmojiResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIMessageReactionEmojiResponse;
class OAIMessageReactionCountDetailsResponse;

class OAIMessageReactionResponse : public OAIObject {
public:
    OAIMessageReactionResponse();
    OAIMessageReactionResponse(QString json);
    ~OAIMessageReactionResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIMessageReactionEmojiResponse getEmoji() const;
    void setEmoji(const OAIMessageReactionEmojiResponse &emoji);
    bool is_emoji_Set() const;
    bool is_emoji_Valid() const;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    OAIMessageReactionCountDetailsResponse getCountDetails() const;
    void setCountDetails(const OAIMessageReactionCountDetailsResponse &count_details);
    bool is_count_details_Set() const;
    bool is_count_details_Valid() const;

    QList<QString> getBurstColors() const;
    void setBurstColors(const QList<QString> &burst_colors);
    bool is_burst_colors_Set() const;
    bool is_burst_colors_Valid() const;

    bool isMeBurst() const;
    void setMeBurst(const bool &me_burst);
    bool is_me_burst_Set() const;
    bool is_me_burst_Valid() const;

    bool isMe() const;
    void setMe(const bool &me);
    bool is_me_Set() const;
    bool is_me_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIMessageReactionEmojiResponse m_emoji;
    bool m_emoji_isSet;
    bool m_emoji_isValid;

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    OAIMessageReactionCountDetailsResponse m_count_details;
    bool m_count_details_isSet;
    bool m_count_details_isValid;

    QList<QString> m_burst_colors;
    bool m_burst_colors_isSet;
    bool m_burst_colors_isValid;

    bool m_me_burst;
    bool m_me_burst_isSet;
    bool m_me_burst_isValid;

    bool m_me;
    bool m_me_isSet;
    bool m_me_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIMessageReactionResponse)

#endif // OAIMessageReactionResponse_H

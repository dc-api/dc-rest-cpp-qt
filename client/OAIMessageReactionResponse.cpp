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

#include "OAIMessageReactionResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageReactionResponse::OAIMessageReactionResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageReactionResponse::OAIMessageReactionResponse() {
    this->initializeModel();
}

OAIMessageReactionResponse::~OAIMessageReactionResponse() {}

void OAIMessageReactionResponse::initializeModel() {

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;

    m_count_details_isSet = false;
    m_count_details_isValid = false;

    m_burst_colors_isSet = false;
    m_burst_colors_isValid = false;

    m_me_burst_isSet = false;
    m_me_burst_isValid = false;

    m_me_isSet = false;
    m_me_isValid = false;
}

void OAIMessageReactionResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageReactionResponse::fromJsonObject(QJsonObject json) {

    m_emoji_isValid = ::dc_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_count_isValid = ::dc_rest::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_count_details_isValid = ::dc_rest::fromJsonValue(m_count_details, json[QString("count_details")]);
    m_count_details_isSet = !json[QString("count_details")].isNull() && m_count_details_isValid;

    m_burst_colors_isValid = ::dc_rest::fromJsonValue(m_burst_colors, json[QString("burst_colors")]);
    m_burst_colors_isSet = !json[QString("burst_colors")].isNull() && m_burst_colors_isValid;

    m_me_burst_isValid = ::dc_rest::fromJsonValue(m_me_burst, json[QString("me_burst")]);
    m_me_burst_isSet = !json[QString("me_burst")].isNull() && m_me_burst_isValid;

    m_me_isValid = ::dc_rest::fromJsonValue(m_me, json[QString("me")]);
    m_me_isSet = !json[QString("me")].isNull() && m_me_isValid;
}

QString OAIMessageReactionResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageReactionResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_emoji.isSet()) {
        obj.insert(QString("emoji"), ::dc_rest::toJsonValue(m_emoji));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::dc_rest::toJsonValue(m_count));
    }
    if (m_count_details.isSet()) {
        obj.insert(QString("count_details"), ::dc_rest::toJsonValue(m_count_details));
    }
    if (m_burst_colors.size() > 0) {
        obj.insert(QString("burst_colors"), ::dc_rest::toJsonValue(m_burst_colors));
    }
    if (m_me_burst_isSet) {
        obj.insert(QString("me_burst"), ::dc_rest::toJsonValue(m_me_burst));
    }
    if (m_me_isSet) {
        obj.insert(QString("me"), ::dc_rest::toJsonValue(m_me));
    }
    return obj;
}

OAIMessageReactionEmojiResponse OAIMessageReactionResponse::getEmoji() const {
    return m_emoji;
}
void OAIMessageReactionResponse::setEmoji(const OAIMessageReactionEmojiResponse &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIMessageReactionResponse::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIMessageReactionResponse::is_emoji_Valid() const{
    return m_emoji_isValid;
}

qint32 OAIMessageReactionResponse::getCount() const {
    return m_count;
}
void OAIMessageReactionResponse::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIMessageReactionResponse::is_count_Set() const{
    return m_count_isSet;
}

bool OAIMessageReactionResponse::is_count_Valid() const{
    return m_count_isValid;
}

OAIMessageReactionCountDetailsResponse OAIMessageReactionResponse::getCountDetails() const {
    return m_count_details;
}
void OAIMessageReactionResponse::setCountDetails(const OAIMessageReactionCountDetailsResponse &count_details) {
    m_count_details = count_details;
    m_count_details_isSet = true;
}

bool OAIMessageReactionResponse::is_count_details_Set() const{
    return m_count_details_isSet;
}

bool OAIMessageReactionResponse::is_count_details_Valid() const{
    return m_count_details_isValid;
}

QList<QString> OAIMessageReactionResponse::getBurstColors() const {
    return m_burst_colors;
}
void OAIMessageReactionResponse::setBurstColors(const QList<QString> &burst_colors) {
    m_burst_colors = burst_colors;
    m_burst_colors_isSet = true;
}

bool OAIMessageReactionResponse::is_burst_colors_Set() const{
    return m_burst_colors_isSet;
}

bool OAIMessageReactionResponse::is_burst_colors_Valid() const{
    return m_burst_colors_isValid;
}

bool OAIMessageReactionResponse::isMeBurst() const {
    return m_me_burst;
}
void OAIMessageReactionResponse::setMeBurst(const bool &me_burst) {
    m_me_burst = me_burst;
    m_me_burst_isSet = true;
}

bool OAIMessageReactionResponse::is_me_burst_Set() const{
    return m_me_burst_isSet;
}

bool OAIMessageReactionResponse::is_me_burst_Valid() const{
    return m_me_burst_isValid;
}

bool OAIMessageReactionResponse::isMe() const {
    return m_me;
}
void OAIMessageReactionResponse::setMe(const bool &me) {
    m_me = me;
    m_me_isSet = true;
}

bool OAIMessageReactionResponse::is_me_Set() const{
    return m_me_isSet;
}

bool OAIMessageReactionResponse::is_me_Valid() const{
    return m_me_isValid;
}

bool OAIMessageReactionResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_details.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_burst_colors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_me_burst_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_me_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageReactionResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_emoji_isValid && m_count_isValid && m_count_details_isValid && m_burst_colors_isValid && m_me_burst_isValid && m_me_isValid && true;
}

} // namespace dc_rest

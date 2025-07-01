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

#include "OAIPinnedMessagesResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPinnedMessagesResponse::OAIPinnedMessagesResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinnedMessagesResponse::OAIPinnedMessagesResponse() {
    this->initializeModel();
}

OAIPinnedMessagesResponse::~OAIPinnedMessagesResponse() {}

void OAIPinnedMessagesResponse::initializeModel() {

    m_has_more_isSet = false;
    m_has_more_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIPinnedMessagesResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinnedMessagesResponse::fromJsonObject(QJsonObject json) {

    m_has_more_isValid = ::dc_rest::fromJsonValue(m_has_more, json[QString("has_more")]);
    m_has_more_isSet = !json[QString("has_more")].isNull() && m_has_more_isValid;

    m_items_isValid = ::dc_rest::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIPinnedMessagesResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinnedMessagesResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_has_more_isSet) {
        obj.insert(QString("has_more"), ::dc_rest::toJsonValue(m_has_more));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::dc_rest::toJsonValue(m_items));
    }
    return obj;
}

bool OAIPinnedMessagesResponse::isHasMore() const {
    return m_has_more;
}
void OAIPinnedMessagesResponse::setHasMore(const bool &has_more) {
    m_has_more = has_more;
    m_has_more_isSet = true;
}

bool OAIPinnedMessagesResponse::is_has_more_Set() const{
    return m_has_more_isSet;
}

bool OAIPinnedMessagesResponse::is_has_more_Valid() const{
    return m_has_more_isValid;
}

QList<OAIPinnedMessageResponse> OAIPinnedMessagesResponse::getItems() const {
    return m_items;
}
void OAIPinnedMessagesResponse::setItems(const QList<OAIPinnedMessageResponse> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIPinnedMessagesResponse::is_items_Set() const{
    return m_items_isSet;
}

bool OAIPinnedMessagesResponse::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIPinnedMessagesResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_has_more_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinnedMessagesResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_has_more_isValid && true;
}

} // namespace dc_rest
